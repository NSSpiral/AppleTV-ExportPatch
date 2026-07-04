/* Runtime dump - NSAutoreleasePool
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAutoreleasePool : NSObject
{
    void * _token;
    void * _reserved3;
    void * _reserved2;
    void * _reserved;
}

+ (void)showPools;
+ (void)releaseAllPools;
+ (unsigned int)autoreleasedObjectCount;
+ (unsigned int)topAutoreleasePoolCount;
+ (char)autoreleasePoolExists;
+ (void)enableRelease:(char)arg0;
+ (void)enableFreedObjectCheck:(char)arg0;
+ (unsigned int)poolCountHighWaterMark;
+ (void)setPoolCountHighWaterMark:(unsigned int)arg0;
+ (unsigned int)poolCountHighWaterResolution;
+ (void)setPoolCountHighWaterResolution:(unsigned int)arg0;
+ (unsigned int)totalAutoreleasedObjects;
+ (void)resetTotalAutoreleasedObjects;
+ (void)addObject:(struct objc_method *)arg0;
+ (NSAutoreleasePool *)allocWithZone:(struct _NSZone *)arg0;

- (NSAutoreleasePool *)retain;
- (void)release;
- (void)dealloc;
- (NSAutoreleasePool *)init;
- (void)addObject:(struct objc_method *)arg0;
- (NSAutoreleasePool *)autorelease;
- (unsigned int)retainCount;
- (NSAutoreleasePool *)initWithCapacity:(unsigned int)arg0;
- (void)drain;

@end
