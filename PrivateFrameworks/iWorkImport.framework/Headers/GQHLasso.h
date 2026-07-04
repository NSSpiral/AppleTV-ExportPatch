/* Runtime dump - GQHLasso
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHLasso : NSObject <GQLassoGenerator>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)beginDocument:(NSObject *)arg0 state:(NSObject *)arg1;
+ (int)endDocument:(NSObject *)arg0 state:(NSObject *)arg1;
+ (int)handleStylesheet:(NSObject *)arg0 state:(NSObject *)arg1;
+ (int)beginWorkspace:(char *)arg0 state:(NSObject *)arg1;
+ (int)endWorkspace:(id)arg0;
+ (int)handleWorkspaceStyle:(NSObject *)arg0 state:(NSObject *)arg1;
+ (Class)beginWorkspacePage:(id)arg0 state:(NSObject *)arg1;
+ (int)handleDrawableZOrder:(char *)arg0 state:(NSObject *)arg1;

@end
