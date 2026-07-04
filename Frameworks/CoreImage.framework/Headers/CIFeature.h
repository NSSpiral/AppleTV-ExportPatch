/* Runtime dump - CIFeature
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFeature : NSObject

@property (readonly, retain) NSString * type;
@property (readonly) struct CGRect bounds;

- (struct CGRect)bounds;
- (CIFeature *)init;
- (NSString *)type;

@end
