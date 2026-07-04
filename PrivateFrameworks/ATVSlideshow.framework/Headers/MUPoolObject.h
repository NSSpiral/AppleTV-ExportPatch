/* Runtime dump - MUPoolObject
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MUPoolObject : NSObject
{
    MUPoolObject * mPoolPrev;
}

+ (MUPoolObject *)allocWithZone:(struct _NSZone *)arg0;
+ (struct ? *)poolInfo;
+ (void)clearAllPools;
+ (char)clearVars;
+ (NSArray *)pooledClasses;
+ (int)clearPool;

- (void)release;
- (void)purge;

@end
