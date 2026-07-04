/* Runtime dump - MTLToolsObject
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsObject : NSObject
{
    MTLToolsObject * _strongParent;
    id _baseObject;
    MTLToolsObject * _parent;
    struct ILayerLockingPolicy * _lockingPolicy;
}

@property (retain, nonatomic) id baseObject;
@property (readonly, weak, nonatomic) MTLToolsObject * parent;
@property (readonly, nonatomic) MTLToolsObject * strongParent;
@property (nonatomic) struct ILayerLockingPolicy * lockingPolicy;

+ (void)visitObjects:(NSArray *)arg0 withVisitor:(NSObject *)arg1;
+ (NSOperationQueue *)dispatchQueue;

- (struct ILayerLockingPolicy *)lockingPolicy;
- (NSObject *)baseObject;
- (void)acceptVisitor:(NSObject *)arg0;
- (MTLToolsObject *)initWithBaseObject:(NSObject *)arg0 parent:(MTLToolsObject *)arg1;
- (MTLToolsObject *)initWithBaseObject:(NSObject *)arg0 parent:(MTLToolsObject *)arg1 lockingPolicy:(struct ILayerLockingPolicy *)arg2;
- (void)setBaseObject:(NSObject *)arg0;
- (MTLToolsObject *)initWithBaseObject:(NSObject *)arg0 strongParent:(MTLToolsObject *)arg1;
- (void)setLockingPolicy:(struct ILayerLockingPolicy *)arg0;
- (NSObject *)baseObjectWithClass:(Class)arg0;
- (NSObject *)originalObject;
- (void)setOriginalObject:(NSObject *)arg0;
- (MTLToolsObject *)strongParent;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_destruct;
- (MTLToolsObject *)parent;

@end
