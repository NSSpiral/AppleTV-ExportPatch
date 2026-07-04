/* Runtime dump - TSDLayoutController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDLayoutController : NSObject
{
    TSDCanvas * mCanvas;
    TSDRootLayout * mRootLayout;
    struct __CFDictionary * mLayoutsByInfo;
    NSMutableSet * mInvalidLayouts;
    NSMutableSet * mLayoutsNeedingRecreating;
    NSMutableSet * mInvalidChildrenLayouts;
    TSDLayout * mValidatingLayout;
}

+ (void)temporaryLayoutControllerForInfos:(id)arg0 useInBlock:(id /* block */)arg1;
+ (NSArray *)allInteractiveLayoutControllers;

- (void)setInfos:(id)arg0;
- (NSDictionary *)layoutForInfo:(NSDictionary *)arg0;
- (NSDictionary *)layoutForInfo:(NSDictionary *)arg0 childOfLayout:(NSObject *)arg1;
- (void)invalidateLayout:(NSObject *)arg0;
- (void)invalidateChildrenOfLayout:(NSObject *)arg0;
- (NSObject *)rootLayout;
- (void)validateLayoutWithDependencies:(NSArray *)arg0;
- (void)i_registerLayout:(NSObject *)arg0;
- (void)i_unregisterLayout:(NSObject *)arg0;
- (void)i_removeAllLayouts;
- (struct CGRect)rectOfTopLevelLayouts;
- (void)validateLayouts;
- (NSObject *)layoutsInRect:(struct CGRect)arg0;
- (NSDictionary *)validatedLayoutForInfo:(NSDictionary *)arg0;
- (NSDictionary *)layoutsForInfo:(NSDictionary *)arg0;
- (void)notifyThatLayoutsChangedOutsideOfLayout;
- (void)validateLayouts:(id)arg0;
- (id)sortLayoutsForDependencies:(id)arg0;
- (void)validateLayoutsWithDependencies:(NSArray *)arg0;
- (NSDictionary *)validatedLayoutsForInfo:(NSDictionary *)arg0;
- (void)invalidateLayoutForRecreation:(id)arg0;
- (id)layoutsForInfos:(id)arg0;
- (NSDictionary *)validatedLayoutForInfo:(NSDictionary *)arg0 childOfLayout:(NSObject *)arg1;
- (void)invalidateLayoutProxiesWithKeyPath:(NSString *)arg0;
- (char)isLayoutOffscreen;
- (void)dealloc;
- (TSDLayoutController *)initWithCanvas:(struct CGRect)arg0;
- (VKClassicGlobeCanvas *)canvas;

@end
