/* Runtime dump - ATVImageControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol ATVButtonImageControl;
@interface ATVImageControl : BRControl <ATVButtonImageControl>
{
    ATVImage * _image;
    struct UIEdgeInsets _capInsets;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) ATVImage * image;
@property (nonatomic) struct UIEdgeInsets capInsets;

- (void)_updateContentsCenter;
- (void)setCapInsets:(struct UIEdgeInsets)arg0;
- (void)setImage:(ATVImage *)arg0;
- (struct UIEdgeInsets)capInsets;
- (ATVImage *)image;
- (void).cxx_destruct;
- (float)aspectRatio;

@end
