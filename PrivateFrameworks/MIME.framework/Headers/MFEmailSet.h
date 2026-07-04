/* Runtime dump - MFEmailSet
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFEmailSet : NSMutableSet
{
    struct __CFSet * _set;
}

+ (struct __CFSet *)set;

- (id)allCommentedAddresses;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (void)removeObject:(struct objc_method *)arg0;
- (unsigned int)count;
- (MFEmailSet *)init;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (void)unionSet:(struct objc_method *)arg0;
- (MFEmailSet *)initWithCapacity:(unsigned int)arg0;
- (void)intersectSet:(struct objc_method *)arg0;
- (NSArray *)allObjects;
- (void)minusSet:(struct objc_method *)arg0;
- (MFEmailSet *)copyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)objectEnumerator;
- (char)isEqualToSet:(NSSet *)arg0;
- (char)isSubsetOfSet:(NSSet *)arg0;
- (char)intersectsSet:(NSSet *)arg0;
- (MFEmailSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSObject *)member:(struct objc_method *)arg0;
- (void)_setupSetWithCapacity:(unsigned int)arg0;
- (NSString *)_generateAllObjectsFromSelector:(SEL)arg0;
- (void)setSet:(struct __CFSet *)arg0;

@end
