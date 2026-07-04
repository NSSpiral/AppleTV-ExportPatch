/* Runtime dump - MURetainingKey
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MURetainingKey : MUPoolObject <NSCopying>
{
    NSObject * _object;
}

@property (readonly) NSObject * object;

+ (struct ? *)poolInfo;
+ (char)clearVars;
+ (NSObject *)retainingKeyWithObject:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (MURetainingKey *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)object;
- (void)purge;
- (MURetainingKey *)initWithObject:(NSObject *)arg0;

@end
