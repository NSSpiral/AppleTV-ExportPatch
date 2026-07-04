/* Runtime dump - NSDocInfo
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDocInfo : NSObject <NSCopying>
{
    long time;
    unsigned short mode;
    struct ? flags;
}

- (NSDocInfo *)initWithFileAttributes:(NSDictionary *)arg0;
- (NSDocInfo *)initFromInfo:(struct stat *)arg0;
- (NSDocInfo *)copy;
- (NSDocInfo *)copyWithZone:(struct _NSZone *)arg0;

@end
