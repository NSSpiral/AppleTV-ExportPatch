/* Runtime dump - GEOPDMerchantLookupParameters
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying>
{
    double _transactionLocationAge;
    double _transactionTimestamp;
    NSString * _merchantCode;
    NSString * _paymentNetwork;
    NSString * _rawMerchantCode;
    GEOLocation * _transactionLocation;
    struct ? _has;
}

@property (readonly, nonatomic) char hasPaymentNetwork;
@property (retain, nonatomic) NSString * paymentNetwork;
@property (readonly, nonatomic) char hasMerchantCode;
@property (retain, nonatomic) NSString * merchantCode;
@property (nonatomic) char hasTransactionTimestamp;
@property (nonatomic) double transactionTimestamp;
@property (readonly, nonatomic) char hasTransactionLocation;
@property (retain, nonatomic) GEOLocation * transactionLocation;
@property (nonatomic) char hasTransactionLocationAge;
@property (nonatomic) double transactionLocationAge;
@property (readonly, nonatomic) char hasRawMerchantCode;
@property (retain, nonatomic) NSString * rawMerchantCode;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDMerchantLookupParameters *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setPaymentNetwork:(NSString *)arg0;
- (void)setMerchantCode:(NSString *)arg0;
- (void)setTransactionLocation:(GEOLocation *)arg0;
- (void)setRawMerchantCode:(NSString *)arg0;
- (char)hasPaymentNetwork;
- (char)hasMerchantCode;
- (void)setTransactionTimestamp:(double)arg0;
- (void)setHasTransactionTimestamp:(char)arg0;
- (char)hasTransactionTimestamp;
- (char)hasTransactionLocation;
- (void)setTransactionLocationAge:(double)arg0;
- (void)setHasTransactionLocationAge:(char)arg0;
- (char)hasTransactionLocationAge;
- (char)hasRawMerchantCode;
- (NSString *)paymentNetwork;
- (NSString *)merchantCode;
- (double)transactionTimestamp;
- (GEOLocation *)transactionLocation;
- (double)transactionLocationAge;
- (NSString *)rawMerchantCode;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
