# HAL でロータリーエンコーダを読んで mbed で使うやつ

nucleo f303k8 用

## 適当解説

encoderBase.h/cpp で共通処理を定義  
encoder1,3.h/cpp で HAL の関数を EncoderBase の仮想関数を override する形で実装  
つかう
