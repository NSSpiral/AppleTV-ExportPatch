/* Runtime dump - HMThreadSafeMutableArrayCollection
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMThreadSafeMutableArrayCollection : NSObject
{
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _mutableArray;
}

@property (readonly, copy, nonatomic) NSArray * array;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (readonly, copy, nonatomic) NSMutableArray * mutableArray;

+ (NSArray *)array;
+ (NSArray *)arrayWithArray:(NSArray *)arg0;

- (NSMutableArray *)mutableArray;
- (void)removeObject:(struct objc_method *)arg0;
- (unsigned int)count;
- (void)addObject:(struct objc_method *)arg0;
- (NSArray *)array;
- (char)containsObject:(NSObject *)arg0;
- (void)addObjectsFromArray:(NSArray *)arg0;
- (void)removeObjectsInArray:(NSArray *)arg0;
- (HMThreadSafeMutableArrayCollection *)initWithArray:(NSArray *)arg0;
- (void)setArray:(NSArray *)arg0;
- (NSPredicate *)filteredArrayUsingPredicate:(NSPredicate *)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;

@end
