/* Runtime dump - TSCH3DScene
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DScene : NSObject
{
    TSCH3DScene * mOriginal;
    NSObject<TSCH3DScenePropertyAccessorFactory> * mAccessorFactory;
    TSCH3DScenePropertyAccessor * mAccessor;
    NSMutableDictionary * mEnumeratorMap;
    NSMutableDictionary * mPropertiesMap;
    TSUNoCopyDictionary * mDelegateMap;
    TSCH3DSceneObject * mMain;
    NSMutableArray * mObjects;
    TSCH3DCamera * mCamera;
}

@property (retain, nonatomic) TSCH3DScene * original;
@property (retain, nonatomic) NSObject<TSCH3DScenePropertyAccessorFactory> * accessorFactory;
@property (retain, nonatomic) TSCH3DScenePropertyAccessor * accessor;
@property (retain, nonatomic) TSCH3DSceneObject * main;
@property (retain, nonatomic) TSCH3DCamera * camera;
@property (readonly, nonatomic) <TSCH3DSceneDelegate> * delegate;

+ (SCNScene *)scene;

- (NSObject *)propertiesForType:(NSObject *)arg0;
- (void)setProperties:(NSDictionary *)arg0 forType:(NSObject *)arg1;
- (struct ChartScenePropertyAccessor)chartProperties;
- (struct TSCH3DScenePart)partForType:(NSObject *)arg0;
- (TSCH3DScene *)original;
- (NSObject *)mutablePropertiesForType:(NSObject *)arg0;
- (NSObject *)enumeratorForType:(NSObject *)arg0;
- (NSObject *)delegateForSceneObject:(NSObject *)arg0;
- (NSArray *)extractObjectsNotOfClasses:(NSArray *)arg0;
- (NSArray *)extractObjectsOfClasses:(NSArray *)arg0;
- (void)resetObjects;
- (void)removeObjectsNotOfClass:(Class)arg0;
- (id)returnRemoved:(char)arg0 removeObjectsPassingTest:(id /* block */)arg1;
- (void)resetDelegates;
- (void)makeDelegatesFromDelegator:(id)arg0;
- (void)setEnumerator:(NSEnumerator *)arg0 forType:(NSObject *)arg1;
- (void)setPart:(struct TSCH3DScenePart)arg0 forType:(NSObject *)arg1;
- (void)setMain:(TSCH3DSceneObject *)arg0;
- (void)setOriginal:(TSCH3DScene *)arg0;
- (TSCH3DScenePropertyAccessor *)accessor;
- (void)enumerateAllObjectsUsingBlock:(id /* block */)arg0;
- (NSCache *)renderCache;
- (void)resetProperties;
- (void)copyPropertiesFromScene:(NSObject *)arg0;
- (NSObject *)enumeratorMap;
- (NSObject *)propertiesMap;
- (NSObject<TSCH3DScenePropertyAccessorFactory> *)accessorFactory;
- (void)overrideObjects;
- (void)setEnumerator:(NSEnumerator *)arg0 properties:(NSDictionary *)arg1 forType:(NSObject *)arg2;
- (NSObject *)delegateForObject:(NSObject *)arg0;
- (void)setDelegate:(<TSCH3DSceneDelegate> *)arg0 forObject:(NSObject *)arg1;
- (void)setDelegate:(<TSCH3DSceneDelegate> *)arg0 forSceneObject:(NSObject *)arg1;
- (NSArray *)reallocateObjects;
- (NSArray *)removeObjects:(char)arg0 ofClasses:(NSArray *)arg1 addTo:(id)arg2;
- (NSArray *)removeObjects:(char)arg0 ofClasses:(NSArray *)arg1 into:(id)arg2;
- (NSArray *)extractObjects:(char)arg0 ofClasses:(NSArray *)arg1;
- (void)resetEnumerator;
- (void)setAccessorFactory:(NSObject<TSCH3DScenePropertyAccessorFactory> *)arg0;
- (void)setAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (void)makeAllObjectsPerformSelector:(SEL)arg0 withObject:(NSObject *)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg0 withObject:(NSObject *)arg1 withObject:(NSObject *)arg2;
- (NSObject *)extractObjectsOfClass:(Class)arg0;
- (NSObject *)extractObjectsNotOfClass:(Class)arg0;
- (NSArray *)objects;
- (id)clone;
- (void)dealloc;
- (unsigned int)count;
- (TSCH3DScene *)init;
- (void)addObject:(struct objc_method *)arg0;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg0;
- (NSString *)description;
- (<TSCH3DSceneDelegate> *)delegate;
- (void)makeObjectsPerformSelector:(SEL)arg0 withObject:(NSObject *)arg1;
- (struct tmat4x4<float>)transform;
- (void)removeObjectsOfClass:(Class)arg0;
- (TSCH3DSceneObject *)main;
- (NSHashTable *)delegateMap;
- (TSCH3DCamera *)camera;
- (void)setCamera:(TSCH3DCamera *)arg0;

@end
