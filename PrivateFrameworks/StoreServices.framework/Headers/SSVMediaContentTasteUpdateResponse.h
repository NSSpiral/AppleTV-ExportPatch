/* Runtime dump - SSVMediaContentTasteUpdateResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteUpdateResponse : NSObject <SSXPCCoding, NSSecureCoding>
{
    char _cachedResponse;
    NSArray * _contentTasteItems;
    NSDate * _expirationDate;
    unsigned long long _responseRevisionID;
}

@property (copy, nonatomic) NSArray * contentTasteItems;
@property (copy, nonatomic) NSDate * expirationDate;
@property (nonatomic) unsigned long long responseRevisionID;
@property (nonatomic) char cachedResponse;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (NSDictionary *)copyXPCEncoding;
- (SSVMediaContentTasteUpdateResponse *)initWithXPCEncoding:(NSString *)arg0;
- (SSVMediaContentTasteUpdateResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setExpirationDate:(NSDate *)arg0;
- (NSDate *)expirationDate;
- (unsigned long long)responseRevisionID;
- (NSArray *)contentTasteItems;
- (void)setContentTasteItems:(NSArray *)arg0;
- (void)setResponseRevisionID:(unsigned long long)arg0;
- (char)isCachedResponse;
- (void)setCachedResponse:(char)arg0;

@end
