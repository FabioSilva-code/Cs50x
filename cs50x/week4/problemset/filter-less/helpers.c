#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    //comb through each row
    for (int i = 0; i < height; i++)
    {
            //comb through each column
        for (int j = 0; j < width; j++)
        {
            //convert pixels to float
            float Red = image [i][j].rgbtRed;
            float Green = image [i][j].rgbtGreen;
            float Blue = image [i][j].rgbtBlue;

            //find average of float values
            int average = round((Red + Blue + Green)/3);
            image[i][j].rgbtRed = image [i][j].rgbtBlue = image [i][j].rgbtGreen = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    //comb through each row
    for (int i = 0; i < height; i++)
    {
            //comb through each column
        for (int j = 0; j < width; j++)
        {
            //convert pixels to float
            float originalRed = image [i][j].rgbtRed;
            float originalGreen = image [i][j].rgbtGreen;
            float originalBlue = image [i][j].rgbtBlue;

            //find the updated pixel value
            int sepiaRed = round(0.393 * originalRed + 0.769 * originalGreen + 0.189 * originalBlue);
            int sepiaGreen = round(0.349 * originalRed + 0.686 * originalGreen + 0.168 * originalBlue);
            int sepiaBlue = round(0.272 * originalRed + 0.534 * originalGreen + 0.131 * originalBlue);

            //update value to 255 if value is greater than 255
            if (sepiaRed > 255)
                {
                    sepiaRed = 255;
                }

            if (sepiaGreen > 255)
                {
                    sepiaGreen = 255;
                }

             if (sepiaBlue > 255)
                {
                    sepiaBlue = 255;
                }

                //update final values
               image[i][j].rgbtRed = sepiaRed;
               image [i][j].rgbtBlue = sepiaBlue;
               image [i][j].rgbtGreen = sepiaGreen;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    //each row
    for (int i = 0; i < height; i++)
    {
        //column
        for (int j = 0; j < width / 2; j++)
        {
            RGBTRIPLE temp = image [i][j];
            image [i][j] = image[i][width - (j+1)];
            image[i][width - (j+1)] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    //copy of image
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            temp[i][j] = image[i][j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int totalRed, totalBlue, totalGreen;
            totalRed = totalBlue = totalGreen = 0;
            float counter = 0.00;

            //neighbouring pixels
            for (int x = -1; x < 2; x++)
            {
                for (int y = -1; y < 2; y++)
                {
                    int currentX = i + x;
                    int currentY = j + y;

                    //Check if valid
                    if (currentX < 0 || currentX > (height-1) || currentY < 0 || currentY > (width -1))
                    {
                        continue;
                    }

                    //Get img value
                    totalRed += image [currentX][currentY].rgbtRed;
                    totalGreen += image[currentX][currentY].rgbtGreen;
                    totalBlue += image[currentX][currentY].rgbtBlue;

                    counter++;

                }

                // calc average of pixels
                temp[i][j].rgbtRed = round(totalRed / counter);
                temp[i][j].rgbtGreen = round(totalGreen / counter);
                temp[i][j].rgbtBlue = round(totalBlue / counter);

            }
        }
    }


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtRed = temp[i][j].rgbtRed;
            image[i][j].rgbtGreen = temp[i][j].rgbtGreen;
            image[i][j].rgbtBlue = temp[i][j].rgbtBlue;
        }
    }

    return;
}
