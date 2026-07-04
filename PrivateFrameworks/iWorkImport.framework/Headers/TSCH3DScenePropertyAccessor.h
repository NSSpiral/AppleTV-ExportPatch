/* Runtime dump - TSCH3DScenePropertyAccessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DScenePropertyAccessor : NSObject <TSCHUnretainedParent>
{
    TSCH3DScene * mScene;
}

@property (readonly, nonatomic) TSCH3DScene * scene;

+ (NSObject *)accessorWithScene:(TSCH3DScene *)arg0;

- (void)clearParent;
- (TSCH3DScene *)scene;
- (TSCH3DScenePropertyAccessor *)initWithScene:(TSCH3DScene *)arg0;
- (void)dealloc;

@end
