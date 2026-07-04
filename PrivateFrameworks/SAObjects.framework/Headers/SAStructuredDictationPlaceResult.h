/* Runtime dump - SAStructuredDictationPlaceResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStructuredDictationPlaceResult : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * placeResultType;
@property (copy, nonatomic) NSData * resultData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)structuredDictationPlaceResult;
+ (NSDictionary *)structuredDictationPlaceResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)placeResultType;
- (void)setPlaceResultType:(NSString *)arg0;
- (NSData *)resultData;
- (void)setResultData:(NSData *)arg0;

@end
