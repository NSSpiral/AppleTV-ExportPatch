/* Runtime dump - GKABObject
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKABObject : NSObject
{
    void * _type;
}

+ (NSObject *)objectWithABObject:(NSObject *)arg0;
+ (NSObject *)objectWithCFType:(void *)arg0;

- (void)dealloc;
- (GKABObject *)initWithCFType:(void *)arg0;
- (void *)CFType;

@end
