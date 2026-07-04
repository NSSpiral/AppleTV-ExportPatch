/* Runtime dump - GQHDrawable
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHDrawable : NSObject <GQDrawablesGenerator>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)beginDrawables:(id)arg0;
+ (int)endDrawables:(id)arg0;
+ (int)handleDrawable:(id)arg0 state:(NSObject *)arg1;
+ (Class)beginTable:(id)arg0;
+ (int)handleFloatingDrawable:(id)arg0 htmlState:(NSObject *)arg1;
+ (void)aboutToGenerateDrawable:(id)arg0 htmlState:(NSObject *)arg1;
+ (void)doneGeneratingDrawable:(id)arg0 htmlState:(NSObject *)arg1;
+ (int)handleInlineDrawable:(id)arg0 htmlState:(NSObject *)arg1;

@end
