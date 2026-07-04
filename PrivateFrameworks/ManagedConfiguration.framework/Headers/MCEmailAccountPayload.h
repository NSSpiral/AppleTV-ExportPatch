/* Runtime dump - MCEmailAccountPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase
{
    NSString * _emailAccountDescription;
    NSString * _emailAccountName;
    NSString * _emailAccountType;
    NSString * _emailAddress;
    NSString * _incomingMailServerAuthentication;
    NSString * _incomingMailServerHostname;
    NSNumber * _incomingMailServerPortNumber;
    char _incomingMailServerUseSSL;
    NSString * _incomingMailServerUsername;
    NSString * _incomingMailServerIMAPPathPrefix;
    NSString * _incomingPassword;
    NSString * _outgoingPassword;
    char _outgoingPasswordSameAsIncomingPassword;
    NSString * _outgoingMailServerAuthentication;
    NSString * _outgoingMailServerHostname;
    NSNumber * _outgoingMailServerPortNumber;
    char _outgoingMailServerUseSSL;
    NSString * _outgoingMailServerUsername;
    NSNumber * _incomingMailServerUseSSLNum;
    NSNumber * _outgoingPasswordSameAsIncomingPasswordNum;
    NSNumber * _outgoingMailServerUseSSLNum;
}

@property (readonly, retain, nonatomic) NSString * emailAccountDescription;
@property (readonly, retain, nonatomic) NSString * emailAccountName;
@property (readonly, retain, nonatomic) NSString * emailAccountType;
@property (readonly, retain, nonatomic) NSString * emailAddress;
@property (readonly, retain, nonatomic) NSString * incomingMailServerAuthentication;
@property (readonly, retain, nonatomic) NSString * incomingMailServerHostname;
@property (readonly, retain, nonatomic) NSNumber * incomingMailServerPortNumber;
@property (readonly, nonatomic) char incomingMailServerUseSSL;
@property (readonly, retain, nonatomic) NSString * incomingMailServerUsername;
@property (readonly, retain, nonatomic) NSString * incomingMailServerIMAPPathPrefix;
@property (readonly, retain, nonatomic) NSString * incomingPassword;
@property (readonly, retain, nonatomic) NSString * outgoingPassword;
@property (readonly, nonatomic) char outgoingPasswordSameAsIncomingPassword;
@property (readonly, retain, nonatomic) NSString * outgoingMailServerAuthentication;
@property (readonly, retain, nonatomic) NSString * outgoingMailServerHostname;
@property (readonly, retain, nonatomic) NSNumber * outgoingMailServerPortNumber;
@property (readonly, nonatomic) char outgoingMailServerUseSSL;
@property (readonly, retain, nonatomic) NSString * outgoingMailServerUsername;
@property (readonly, nonatomic) NSNumber * incomingMailServerUseSSLNum;
@property (readonly, nonatomic) NSNumber * outgoingPasswordSameAsIncomingPasswordNum;
@property (readonly, nonatomic) NSNumber * outgoingMailServerUseSSLNum;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;
+ (NSString *)profileNameFromAccountTag:(NSString *)arg0;

- (NSString *)description;
- (NSString *)title;
- (NSString *)subtitle2Label;
- (void).cxx_destruct;
- (NSString *)emailAddress;
- (MCEmailAccountPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSString *)emailAccountDescription;
- (NSString *)_emailAccountTypeLocalizedString;
- (NSString *)incomingMailServerHostname;
- (NSString *)emailAccountType;
- (NSString *)_authenticationTypeLocalizedString:(NSString *)arg0;
- (NSString *)subtitle2Description;
- (NSString *)emailAccountName;
- (NSString *)incomingMailServerAuthentication;
- (NSNumber *)incomingMailServerPortNumber;
- (char)incomingMailServerUseSSL;
- (NSString *)incomingMailServerUsername;
- (NSString *)incomingMailServerIMAPPathPrefix;
- (NSString *)incomingPassword;
- (NSString *)outgoingPassword;
- (char)outgoingPasswordSameAsIncomingPassword;
- (NSString *)outgoingMailServerAuthentication;
- (NSString *)outgoingMailServerHostname;
- (NSNumber *)outgoingMailServerPortNumber;
- (char)outgoingMailServerUseSSL;
- (NSString *)outgoingMailServerUsername;
- (NSNumber *)incomingMailServerUseSSLNum;
- (NSNumber *)outgoingPasswordSameAsIncomingPasswordNum;
- (NSNumber *)outgoingMailServerUseSSLNum;

@end
