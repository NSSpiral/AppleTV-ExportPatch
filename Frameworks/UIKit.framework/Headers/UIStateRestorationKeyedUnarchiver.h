/* Runtime dump - UIStateRestorationKeyedUnarchiver
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver
{
    NSDictionary * _defaultValues;
}

- (void)dealloc;
- (NSString *)decodeObjectForKey:(NSString *)arg0;
- (UIStateRestorationKeyedUnarchiver *)initForReadingWithData:(NSData *)arg0 defaultValues:(NSDictionary *)arg1;

@end
