/* Runtime dump - ATVImageScaleDecorator
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVImageScaleDecorator : NSObject <ATVImageDecorator>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (id)decorate:(id)arg0 scaledToSize:(struct CGSize)arg1 crop:(char)arg2;
- (NSString *)decoratorIdentifier;
- (UIImage *)cropImage:(UIImage *)arg0 toSize:(struct CGSize)arg1;
- (UIImage *)scaleImage:(UIImage *)arg0 toSize:(struct CGSize)arg1;

@end
