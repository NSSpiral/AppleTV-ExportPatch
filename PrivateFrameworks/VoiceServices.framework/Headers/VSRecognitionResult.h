/* Runtime dump - VSRecognitionResult
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionResult : NSObject

+ (void)initialize;
+ (NSString *)recognitionResultWithModelIdentifier:(NSString *)arg0 classIdentifiers:(id)arg1 values:(NSArray *)arg2;

- (VSRecognitionResult *)retain;
- (void)release;
- (VSRecognitionResult *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)modelIdentifier;
- (int)elementCount;
- (char)getElementClassIdentifier:(id *)arg0 value:(id *)arg1 atIndex:(int)arg2;
- (NSString *)recognitionResultByReplacingValueForClassIdentifier:(NSString *)arg0 withValue:(NSValue *)arg1;
- (NSString *)valueOfFirstElementWithClassIdentifier:(Class)arg0;
- (id /* block */)createHandler;
- (void)setRecognitionAction:(NSObject *)arg0;
- (NSObject *)recognitionAction;

@end
