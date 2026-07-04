/* Runtime dump - BRTransportLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRWaitSpinnerControl;
@interface BRTransportLayer : BRControl
{
    char _zeroDuration;
    char _drawsBetweenLeftEdgeAndBufferEdge;
    char _useWideLeftEndCap;
    char _useWideRightEndCap;
    char _playerStateHidden;
    float _percentComplete;
    struct _NSRange _downloadedRange;
    int _currentState;
    NSMutableDictionary * _cachedImages;
    struct CGRect _leftEndCapBounds;
    struct CGRect _rightEndCapBounds;
    struct CGRect _leftEndCapExtensionBounds;
    struct CGRect _rightEndCapExtensionBounds;
    ATVImage * _leftEndCap;
    ATVImage * _leftEndCapPiece;
    ATVImage * _rightEndCap;
    ATVImage * _rightEndCapPiece;
    struct CGRect _leftProgressEndCapBounds;
    struct CGRect _rightProgressEndCapBounds;
    ATVImage * _leftProgressEndCap;
    ATVImage * _rightProgressEndCap;
    ATVImage * _leftProgressUnbufferedEndCap;
    struct CGRect _leftGrayBarBounds;
    struct CGRect _rightGrayBarBounds;
    ATVImage * _grayBarPiece;
    struct CGRect _rightGrayEndCapBounds;
    ATVImage * _rightGrayEndCap;
    struct CGRect _leftWhiteBarBounds;
    struct CGRect _rightWhiteBarBounds;
    ATVImage * _whiteBarPiece;
    struct CGRect _blueAlreadyPlayedBounds;
    ATVImage * _blueAlreadyPlayed;
    struct CGRect _chapterMarkerBounds;
    NSArray * _chapterMarkers;
    NSArray * _interstitialMarkers;
    ATVImage * _interstitialOnImage;
    ATVImage * _interstitialOffImage;
    long _currentInterstitialIndex;
    float _temporaryMarkerPositionPercentage;
    char _showChapterMarkers;
    struct CGRect _playheadBounds;
    ATVImage * _playhead;
    struct CGSize _dynamicBounds;
    struct CGSize _staticBounds;
    BRWaitSpinnerControl * _spinner;
}

- (void)layoutSubcontrols;
- (BRTransportLayer *)initWithSpinner:(char)arg0;
- (void)setShowChapterMarks:(char)arg0;
- (struct CGRect)rightEndCapFrame;
- (struct CGRect)rightEndCapExtensionFrame;
- (float)playheadPosition;
- (struct CGRect)leftEndCapRenderableArea;
- (void)setChapterMarkers:(NSArray *)arg0 withTemporaryMarker:(float)arg1;
- (void)setDrawsBetweenLeftEdgeAndBufferEdge:(char)arg0;
- (void)setUseWideLeftEndCap:(char)arg0;
- (void)setZeroDuration:(char)arg0;
- (void)setDownloadedRange:(struct _NSRange)arg0;
- (void)setCurrentInterstitialIndex:(long)arg0;
- (char)showChapterMarks;
- (void)setInterstitialMarkers:(NSArray *)arg0;
- (void)setPlayerStateHidden:(char)arg0;
- (void)setUseWideRightEndCap:(char)arg0;
- (NSString *)_cachedImageForName:(NSString *)arg0;
- (void)_updateLeftEnd;
- (void)_updateDynamicFrames;
- (void)_updateStaticFrames;
- (void)_drawChapterMarkersInContext:(struct CGContext *)arg0;
- (void)_drawInterstitialMarkersInContext:(struct CGContext *)arg0;
- (NSString *)_loadImageForName:(NSString *)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (int)state;
- (void)setState:(int)arg0;
- (void)setPercentComplete:(float)arg0;

@end
