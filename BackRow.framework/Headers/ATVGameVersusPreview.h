/* Runtime dump - ATVGameVersusPreview
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRReady;

@class BRAsyncImageControl, BRTextControl;
@interface ATVGameVersusPreview : BRControl <BRReady>
{
    BRTextControl * _centerTextControl;
    char _isReady;
    BRAsyncImageControl * _backgroundImageControl;
    BRAsyncImageControl * _leftImageControl;
    BRAsyncImageControl * _rightImageControl;
}

@property (readonly, nonatomic) BRAsyncImageControl * backgroundImageControl;
@property (readonly, nonatomic) BRAsyncImageControl * leftImageControl;
@property (readonly, nonatomic) BRAsyncImageControl * rightImageControl;
@property (copy, nonatomic) NSString * centerText;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubcontrols;
- (void)getReady;
- (void)_setHiddenOnSubcontrols:(char)arg0;
- (void)_imageLoadedNotification:(NSNotification *)arg0;
- (NSDictionary *)_centerTextAttributes;
- (NSString *)centerText;
- (BRAsyncImageControl *)backgroundImageControl;
- (BRAsyncImageControl *)leftImageControl;
- (BRAsyncImageControl *)rightImageControl;
- (void)dealloc;
- (ATVGameVersusPreview *)init;
- (char)isReady;
- (void)setCenterText:(NSString *)arg0;

@end
