/* Runtime dump - GQHBodyStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHBodyStorage : NSObject <GQBodyStorageGenerator>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)handleSection:(id)arg0 state:(NSObject *)arg1;
+ (int)handlePageStart:(id)arg0 state:(NSObject *)arg1;
+ (int)handleContainerHint:(id)arg0 state:(NSObject *)arg1;
+ (int)handleFootnotes:(id)arg0 state:(NSObject *)arg1;
+ (int)handleTocEntry:(id)arg0 state:(NSObject *)arg1;
+ (int)handleTocContent:(NSObject *)arg0 state:(NSObject *)arg1;
+ (int)handleBodyStorage:(id)arg0 state:(NSObject *)arg1;
+ (int)handleLayout:(NSObject *)arg0 state:(NSObject *)arg1;

@end
