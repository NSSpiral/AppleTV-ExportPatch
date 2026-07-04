/* Runtime dump - UIStatusBarComposedData
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarComposedData : NSObject <NSCopying>
{
    struct ? _rawData;
    id _itemEnabled;
    NSString * _doubleHeightStatus;
}

@property (readonly, nonatomic) struct ? * rawData;
@property (copy, nonatomic) NSString * doubleHeightStatus;

- (void)dealloc;
- (UIStatusBarComposedData *)copyWithZone:(struct _NSZone *)arg0;
- (struct ? *)rawData;
- (char)isItemEnabled:(int)arg0;
- (void)setItem:(int)arg0 enabled:(char)arg1;
- (NSString *)doubleHeightStatus;
- (UIStatusBarComposedData *)initWithRawData:(struct ? *)arg0;
- (void)setDoubleHeightStatus:(NSString *)arg0;

@end
