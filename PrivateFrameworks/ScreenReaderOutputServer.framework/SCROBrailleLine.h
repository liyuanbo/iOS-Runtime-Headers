/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class <SCROBrailleDriverProtocol>, NSData, NSMutableAttributedString;

@interface SCROBrailleLine : NSObject {
    struct { 
        NSData *data; 
        int alignment; 
        long long length; 
        char *cells; 
    id _appToken;
    char *_blinkerBuffer;
    <SCROBrailleDriverProtocol> *_brailleDriver;
    struct __CFArray { } *_chunkArray;
    struct __CFDictionary { } *_chunkDictionary;
    char *_displayBuffer;
    char *_displayFilter;
    int _displayMode;
    long long _firstToken;
    long long _iBeamLocation;
    long long _insetSize;
    long long _lastToken;
    long long _leftInset;
    NSMutableAttributedString *_lineBuffer;
    int _lineFocus;
    long long _lineOffset;
    long long _masterStatusCellIndex;
    long long _rightInset;
    long long _size;
    NSData *_statusData;
    char *_statusFilter;
    long long _statusSize;
    } _virtualStatus;
    bool_anyUnread;
    bool_blink;
    bool_currentUnread;
    bool_displayEnabled;
    bool_isPanning;
    bool_needsDisplayFlush;
    bool_needsFocusFlush;
    bool_needsStatusFlush;
    bool_showDotsSevenAndEight;
}

@property bool displayEnabled;
@property(readonly) bool needsDisplayFlush;

+ (void)initialize;

- (bool)_allowInset;
- (bool)_blink:(bool)arg1;
- (void)_flush;
- (void)_flushRealStatus;
- (void)_updateOffsets;
- (bool)anyUnread;
- (id)appToken;
- (void)blinker;
- (bool)canPanLeft;
- (bool)canPanRight;
- (bool)currentUnread;
- (void)dealloc;
- (bool)display;
- (bool)displayEnabled;
- (int)displayMode;
- (long long)firstToken;
- (bool)getStatusRouterIndex:(long long*)arg1 forRawIndex:(long long)arg2;
- (id)initWithDriver:(id)arg1 mainSize:(long long)arg2 statusSize:(long long)arg3;
- (long long)lastToken;
- (int)lineFocus;
- (long long)masterStatusCellIndex;
- (bool)needsDisplayFlush;
- (id)newLineDescriptorscriptor;
- (bool)panLeft;
- (bool)panRight;
- (void)setAnyUnread:(bool)arg1;
- (void)setAppToken:(id)arg1;
- (void)setCurrentUnread:(bool)arg1;
- (void)setDisplayEnabled:(bool)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setFormatter:(id)arg1;
- (void)setLineFocus:(int)arg1;
- (void)setMainSize:(long long)arg1;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setRealStatus:(id)arg1;
- (void)setShowDotsSevenAndEight:(bool)arg1;
- (void)setStatusSize:(long long)arg1;
- (void)setVirtualStatus:(id)arg1 alignment:(int)arg2;
- (bool)showDotsSevenAndEight;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3;

@end