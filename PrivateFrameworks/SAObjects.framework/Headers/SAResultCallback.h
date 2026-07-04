/* Runtime dump - SAResultCallback
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAResultCallback : AceObject <SAAceSerializable>

@property (nonatomic) int code;
@property (copy, nonatomic) NSArray * commandReferences;
@property (copy, nonatomic) NSArray * commands;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (id /* block */)resultCallback;
+ (NSDictionary *)resultCallbackWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)code;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)commandReferences;
- (void)setCommandReferences:(NSArray *)arg0;
- (void)setCode:(int)arg0;

@end
