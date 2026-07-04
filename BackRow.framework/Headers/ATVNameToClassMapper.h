/* Runtime dump - ATVNameToClassMapper
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVNameToClassMapper : NSObject
{
    NSDictionary * _nameToClass;
}

- (void)dealloc;
- (Class)classForName:(NSString *)arg0;
- (ATVNameToClassMapper *)initWithPlist:(NSDictionary *)arg0;

@end
