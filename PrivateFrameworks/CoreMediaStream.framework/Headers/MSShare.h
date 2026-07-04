/* Runtime dump - MSShare
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSShare : NSObject <NSCoding>
{
    NSString * _personID;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _emailAddress;
    NSString * _UUID;
    int _sharingOurStream;
    int _sharingTheirStream;
}

@property (retain, nonatomic) NSString * personID;
@property (retain, nonatomic) NSString * firstName;
@property (retain, nonatomic) NSString * lastName;
@property (retain, nonatomic) NSString * emailAddress;
@property (retain, nonatomic) NSString * UUID;
@property (nonatomic) int sharingOurStream;
@property (nonatomic) int sharingTheirStream;
@property (retain, nonatomic) NSString * fullName;
@property (nonatomic) int sharingOurPhotostream;
@property (nonatomic) int sharingTheirPhotostream;

+ (CKDPShare *)share;

- (MSShare *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)UUID;
- (void).cxx_destruct;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSString *)emailAddress;
- (void)setEmailAddress:(NSString *)arg0;
- (int)sharingOurStream;
- (int)sharingTheirStream;
- (void)setSharingOurStream:(int)arg0;
- (void)setSharingTheirStream:(int)arg0;
- (int)sharingOurPhotostream;
- (void)setSharingOurPhotostream:(int)arg0;
- (int)sharingTheirPhotostream;
- (void)setSharingTheirPhotostream:(int)arg0;
- (NSString *)personID;
- (NSString *)fullName;
- (void)setUUID:(NSSet *)arg0;
- (void)setFullName:(NSString *)arg0;
- (void)setPersonID:(NSString *)arg0;

@end
