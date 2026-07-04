/* Runtime dump - AFPerson
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFPerson : AFSiriModelObject <AFTranscriptionType>
{
    NSSet * _contactHandles;
    NSString * _fullName;
}

@property (copy, nonatomic) NSSet * contactHandles;
@property (copy, nonatomic) NSString * fullName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (AFPerson *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSSet *)contactHandles;
- (void)setContactHandles:(NSSet *)arg0;
- (NSString *)fullName;
- (void)setFullName:(NSString *)arg0;

@end
