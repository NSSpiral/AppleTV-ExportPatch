/* Runtime dump - SASCancelSpeech
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASCancelSpeech : SABaseCommand <SAServerBoundCommand>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SASCancelSpeech *)cancelSpeech;
+ (NSDictionary *)cancelSpeechWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;

@end
