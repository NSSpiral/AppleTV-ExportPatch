/* Runtime dump - SASyncFinished
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncFinished : SABaseCommand <SAServerBoundCommand>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (id /* block */)finished;
+ (NSDictionary *)finishedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;

@end
