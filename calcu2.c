            Text(hwnd, ID_EDIT2, numeroDos, 10);
            double nmr1 = atof(numeroUno);
            double nmr2 = atof(numeroDos);
            double res;

            if (strcmp(respuestaR, "Suma") == 0) {
                res = nmr1 + nmr2;
                sprintf(respuestaFinal, "%f", res);
                CreateWindow("STATIC", respuestaFinal, ES_CENTER | WS_CHILD | WS_VISIBLE, 450, 123, 80, 25, hwnd, NULL, NULL, NULL);
            }
            else if (strcmp(respuestaR, "Resta") == 0) {
                res = nmr1 - nmr2;
                sprintf(respuestaFinal, "%f", res);
                CreateWindow("STATIC", respuestaFinal, ES_CENTER | WS_CHILD | WS_VISIBLE, 450, 123, 80, 25, hwnd, NULL, NULL, NULL);
            }
            else if (strcmp(respuestaR, "Multiplicacion") == 0) {
                res = nmr1 * nmr2;
                sprintf(respuestaFinal, "%f", res);
                CreateWindow("STATIC", respuestaFinal, ES_CENTER | WS_CHILD | WS_VISIBLE, 450, 123, 80, 25, hwnd, NULL, NULL, NULL);
            }
            else if (strcmp(respuestaR, "Division") == 0) {
                if (nmr2 == 0) {
                    CreateWindow("STATIC", "Error", ES_CENTER | WS_CHILD | WS_VISIBLE, 450, 123, 80, 25, hwnd, NULL, NULL, NULL);
                }
                else {
                    res = nmr1 / nmr2;
                    sprintf(respuestaFinal, "%f", res);
                    CreateWindow("STATIC", respuestaFinal, ES_CENTER | WS_CHILD | WS_VISIBLE, 450, 123, 80, 25, hwnd, NULL, NULL, NULL);
                }
            }
        }
        break;
        }
    case WM_DESTROY: {
        PostQuitMessage(0);
        break;
    }

    case WM_CTLCOLORSTATIC: {
        HDC hdcStatic = (HDC)wParam;
        SetTextColor(hdcStatic, RGB(0, 0, 0));
        SetBkColor(hdcStatic, RGB(21, 232, 189));
        return (INT_PTR)CreateSolidBrush(RGB(21, 232, 189));
        break;
    }

    default: {
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    }
    return 0;
}
