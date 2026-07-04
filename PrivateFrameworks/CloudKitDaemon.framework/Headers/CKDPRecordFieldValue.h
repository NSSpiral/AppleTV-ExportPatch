/* Runtime dump - CKDPRecordFieldValue
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordFieldValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _signedValue;
    CKDPAsset * _assetValue;
    NSData * _bytesValue;
    CKDPDate * _dateValue;
    NSMutableArray * _listValues;
    CKDPLocationCoordinate * _locationValue;
    CKDPPackage * _packageValue;
    CKDPRecordReference * _referenceValue;
    NSString * _stringValue;
    int _type;
    struct ? _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasBytesValue;
@property (retain, nonatomic) NSData * bytesValue;
@property (nonatomic) char hasSignedValue;
@property (nonatomic) long long signedValue;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) char hasDateValue;
@property (retain, nonatomic) CKDPDate * dateValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString * stringValue;
@property (readonly, nonatomic) char hasLocationValue;
@property (retain, nonatomic) CKDPLocationCoordinate * locationValue;
@property (readonly, nonatomic) char hasReferenceValue;
@property (retain, nonatomic) CKDPRecordReference * referenceValue;
@property (readonly, nonatomic) char hasAssetValue;
@property (retain, nonatomic) CKDPAsset * assetValue;
@property (retain, nonatomic) NSMutableArray * listValues;
@property (readonly, nonatomic) char hasPackageValue;
@property (retain, nonatomic) CKDPPackage * packageValue;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)doubleValue;
- (void)setType:(int)arg0;
- (int)type;
- (CKDPRecordFieldValue *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addListValue:(id)arg0;
- (void)setBytesValue:(NSData *)arg0;
- (void)setDateValue:(CKDPDate *)arg0;
- (void)setLocationValue:(CKDPLocationCoordinate *)arg0;
- (void)setReferenceValue:(CKDPRecordReference *)arg0;
- (void)setAssetValue:(CKDPAsset *)arg0;
- (unsigned int)listValuesCount;
- (void)clearListValues;
- (NSObject *)listValueAtIndex:(unsigned int)arg0;
- (void)setPackageValue:(CKDPPackage *)arg0;
- (char)hasBytesValue;
- (void)setSignedValue:(long long)arg0;
- (void)setHasSignedValue:(char)arg0;
- (char)hasSignedValue;
- (void)setDoubleValue:(double)arg0;
- (void)setHasDoubleValue:(char)arg0;
- (char)hasDoubleValue;
- (char)hasDateValue;
- (char)hasStringValue;
- (char)hasLocationValue;
- (char)hasReferenceValue;
- (char)hasAssetValue;
- (char)hasPackageValue;
- (NSData *)bytesValue;
- (long long)signedValue;
- (CKDPDate *)dateValue;
- (CKDPLocationCoordinate *)locationValue;
- (CKDPRecordReference *)referenceValue;
- (CKDPAsset *)assetValue;
- (NSMutableArray *)listValues;
- (void)setListValues:(NSMutableArray *)arg0;
- (CKDPPackage *)packageValue;
- (NSDictionary *)_prettyDictionaryRepresentation;
- (NSObject *)_prettyRepresentationFromObject:(NSObject *)arg0;
- (NSObject *)_descriptionForType:(int)arg0;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
