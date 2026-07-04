/* Runtime dump - TIKeyboardCandidateResultSetCoder
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidateResultSetCoder : NSObject
{
    NSMutableData * _mutableData;
    NSData * _data;
    unsigned int _offset;
}

@property (retain, nonatomic) NSData * data;
@property (retain, nonatomic) NSMutableData * mutableData;
@property (nonatomic) unsigned int offset;
@property (readonly, nonatomic) char * bytes;
@property (readonly, nonatomic) char * currentPosition;

+ (NSData *)decodeWithData:(NSData *)arg0;
+ (NSSet *)encodeWithCandidateResultSet:(TIKeyboardCandidateResultSet *)arg0;
+ (NSObject *)candidateTypeToClassNameMap;
+ (Class)classFromCandidateType:(int)arg0;

- (void)dealloc;
- (char *)bytes;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (void)setOffset:(unsigned int)arg0;
- (unsigned int)offset;
- (TIKeyboardCandidateResultSet *)candidateResultSet;
- (char *)currentPosition;
- (unsigned long long)decodeUInt64;
- (void)encodeUInt64:(unsigned long long)arg0;
- (unsigned char)decodeByte;
- (NSString *)decodeString;
- (void)encodeByte:(unsigned char)arg0;
- (void)encodeString:(NSString *)arg0;
- (TIKeyboardCandidateResultSetCoder *)initForEncoding;
- (NSSet *)dataFromCandidateResultSet:(NSSet *)arg0;
- (TIKeyboardCandidateResultSetCoder *)initForDecodingWithData:(NSData *)arg0;
- (TIKeyboardCandidateResultSetCoder *)initWithData:(NSData *)arg0 mutableData:(NSMutableData *)arg1;
- (NSMutableData *)mutableData;
- (unsigned int)decodeUInt32;
- (void)encodeStringArray:(NSArray *)arg0;
- (void)encodeUInt32:(unsigned int)arg0;
- (void)encodeShort:(unsigned short)arg0;
- (NSDate *)decodeCandidate;
- (NSArray *)decodeStringArray;
- (unsigned short)decodeShort;
- (void)encodeBool:(char)arg0;
- (char)decodeBool;
- (void)encodePointerValueArray:(NSArray *)arg0;
- (NSArray *)decodePointerValueArray;
- (void)setMutableData:(NSMutableData *)arg0;

@end
