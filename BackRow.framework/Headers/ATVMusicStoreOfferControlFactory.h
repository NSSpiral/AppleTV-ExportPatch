/* Runtime dump - ATVMusicStoreOfferControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;

@class BRControl;
@interface ATVMusicStoreOfferControlFactory : NSObject <BRControlFactory>
{
    UIColor * _color;
}

@property (retain, nonatomic) UIColor * color;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVMusicStoreOfferControlFactory *)factory;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (void)dealloc;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;

@end
