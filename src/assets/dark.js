const darkTheme = {
    darkMode: true,
    color: [
        '#4992ff',
        '#7cffb2',
        '#fddd60',
        '#ff6e76',
        '#58d9f9',
        '#05c091',
        '#ff8a45',
        '#8d48e3',
        '#dd79ff'
    ],
    backgroundColor: '#100C2A',
    axisPointer: {
        lineStyle: {
            color: '#817f91'
        },
        crossStyle: {
            color: '#817f91'
        },
        label: {
            // TODO Contrast of label backgorundColor
            color: '#fff'
        }
    },
    legend: {
        textStyle: {
            color: '#B9B8CE'
        }
    },
    textStyle: {
        color: '#B9B8CE'
    },
    title: {
        textStyle: {
            color: '#EEF1FA'
        },
        subtextStyle: {
            color: '#B9B8CE'
        }
    },
    toolbox: {
        iconStyle: {
            borderColor: '#B9B8CE'
        }
    },
    dataZoom: {
        borderColor: '#71708A',
        textStyle: {
            color: '#B9B8CE'
        },
        brushStyle: {
            color: 'rgba(135,163,206,0.3)'
        },
        handleStyle: {
            color: '#353450',
            borderColor: '#C5CBE3'
        },
        moveHandleStyle: {
            color: '#B0B6C3',
            opacity: 0.3
        },
        fillerColor: 'rgba(135,163,206,0.2)',
        emphasis: {
            handleStyle: {
                borderColor: '#91B7F2',
                color: '#4D587D'
            },
            moveHandleStyle: {
                color: '#636D9A',
                opacity: 0.7
            }
        },
        dataBackground: {
            lineStyle: {
                color: '#71708A',
                width: 1
            },
            areaStyle: {
                color: '#71708A'
            }
        },
        selectedDataBackground: {
            lineStyle: {
                color: '#87A3CE'
            },
            areaStyle: {
                color: '#87A3CE'
            }
        }
    },
    visualMap: {
        textStyle: {
            color: '#B9B8CE'
        }
    },
}

export default darkTheme;