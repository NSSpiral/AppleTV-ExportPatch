/* Runtime dump - TSCH3DSelectionPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSelectionPath : TSCHSelectionPath
{
    Class mSceneObjectClass;
    unsigned int mStyleIndex;
}

@property (readonly, nonatomic) Class sceneObjectClass;
@property (readonly, nonatomic) unsigned int styleIndex;

+ (NSObject *)selectionPathWithClass:(Class)arg0 styleIndex:(unsigned int)arg1 type:(NSObject *)arg2 name:(NSString *)arg3 arguments:(NSDictionary *)arg4;
+ (NSObject *)selectionPathWithClass:(Class)arg0 styleIndex:(unsigned int)arg1 selectionPath:(NSString *)arg2;

- (Class)sceneObjectClass;
- (TSCH3DSelectionPath *)initWithClass:(Class)arg0 styleIndex:(unsigned int)arg1 type:(NSObject *)arg2 name:(NSString *)arg3 arguments:(NSDictionary *)arg4;
- (unsigned int)styleIndex;

@end
