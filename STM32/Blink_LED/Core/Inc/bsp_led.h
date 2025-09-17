/* define IO */
#define LED1_TOGGLE     HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5)
#define LED1_OFF        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
#define LED1_ON         HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET);

#define LED2_TOGGLE     HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0)
#define LED2_OFF        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);
#define LED2_ON         HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);

#define LED3_TOGGLE     HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_6)
#define LED3_OFF        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);
#define LED3_ON         HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET);

//red
#define LED_RED \
                    LED1_ON;\
                    LED2_OFF;\
                    LED3_OFF

//green
#define LED_GREEN \
                    LED1_OFF;\
                    LED2_ON;\
                    LED3_OFF

//blue
#define LED_BLUE \
                    LED1_OFF;\
                    LED2_OFF;\
                    LED3_ON

//yellow 
#define LED_YELLOW \
                    LED1_ON;\
                    LED2_ON;\
                    LED3_OFF

//紫 (红 + 蓝)
#define LED_PURPLE \
                    LED1_ON;\
                    LED2_OFF;\
                    LED3_ON

//青 (绿 + 蓝)
#define LED_CYAN \
                    LED1_OFF;\
                    LED2_ON;\
                    LED3_ON

//白 (红 + 绿 + 蓝)
#define LED_WHITE \
                    LED1_ON;\
                    LED2_ON;\
                    LED3_ON

//黑 (全部关闭)
#define LED_RGBOFF \
                    LED1_OFF;\
                    LED2_OFF;\
                    LED3_OFF