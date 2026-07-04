/* Runtime dump - IMWeakArray
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMWeakArray : NSObject
{
    NSMutableArray * _weakArray;
}

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (void)removeObject:(struct objc_method *)arg0;
- (void)addObject:(struct objc_method *)arg0;
- (NSString *)description;
- (NSArray *)copyMutableArray;
- (void)addObjectIfNotIdenticalObjectExists:(id)arg0;
- (NSSet *)copyMutableSet;

@end
