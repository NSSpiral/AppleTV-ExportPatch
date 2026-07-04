/* Runtime dump - MSASComment
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASComment : NSObject
{
    char _isLike;
    char _isCaption;
    char _isBatchComment;
    char _isDeletable;
    char _isMine;
    NSString * _GUID;
    int _ID;
    NSDate * _timestamp;
    NSDate * _clientTimestamp;
    NSString * _personID;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _fullName;
    NSString * _email;
    NSString * _content;
}

@property (retain, nonatomic) NSString * GUID;
@property (nonatomic) int ID;
@property (retain, nonatomic) NSDate * timestamp;
@property (retain, nonatomic) NSDate * clientTimestamp;
@property (retain, nonatomic) NSString * email;
@property (retain, nonatomic) NSString * personID;
@property (retain, nonatomic) NSString * fullName;
@property (retain, nonatomic) NSString * firstName;
@property (retain, nonatomic) NSString * lastName;
@property (nonatomic) char isDeletable;
@property (nonatomic) char isMine;
@property (nonatomic) char isLike;
@property (nonatomic) char isCaption;
@property (nonatomic) char isBatchComment;
@property (retain, nonatomic) NSString * content;

+ (char)supportsSecureCoding;
+ (NSDictionary *)MSASPCommentFromProtocolDictionary:(NSDictionary *)arg0;
+ (NSString *)comment;

- (int)ID;
- (void)setEmail:(NSString *)arg0;
- (MSASComment *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MSASComment *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSDate *)timestamp;
- (void)setTimestamp:(NSDate *)arg0;
- (NSString *)content;
- (void).cxx_destruct;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (void)setID:(int)arg0;
- (void)setClientTimestamp:(NSDate *)arg0;
- (NSString *)personID;
- (NSString *)fullName;
- (void)setGUID:(NSSet *)arg0;
- (void)setFullName:(NSString *)arg0;
- (void)setPersonID:(NSString *)arg0;
- (void)setIsBatchComment:(char)arg0;
- (void)setIsCaption:(char)arg0;
- (NSString *)GUID;
- (void)setIsDeletable:(char)arg0;
- (void)setIsMine:(char)arg0;
- (char)isCaption;
- (char)isBatchComment;
- (char)isLike;
- (void)setIsLike:(char)arg0;
- (void)setContent:(NSString *)arg0;
- (char)isMine;
- (char)isDeletable;
- (NSString *)email;
- (NSDate *)clientTimestamp;

@end
