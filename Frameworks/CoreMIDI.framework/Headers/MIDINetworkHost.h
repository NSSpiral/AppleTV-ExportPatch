/* Runtime dump - MIDINetworkHost
 * Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDINetworkHost : NSObject
{
    struct _MIDINetworkHostImpl * _impl;
}

@property (readonly, retain, nonatomic) NSString * name;
@property (readonly, retain, nonatomic) NSString * address;
@property (readonly, nonatomic) unsigned int port;
@property (readonly, retain, nonatomic) NSString * netServiceName;
@property (readonly, retain, nonatomic) NSString * netServiceDomain;

+ (NSString *)hostWithName:(NSString *)arg0 netServiceName:(NSString *)arg1 netServiceDomain:(NSString *)arg2;
+ (NSString *)hostWithName:(NSString *)arg0 address:(NSString *)arg1 port:(unsigned int)arg2;
+ (NSString *)hostWithName:(NSString *)arg0 netService:(NSNetService *)arg1;
+ (NSString *)fromAddressAsText:(NSString *)arg0 withName:(NSString *)arg1;

- (NSString *)netServiceName;
- (NSString *)netServiceDomain;
- (char)hasSameAddressAs:(id)arg0;
- (NSString *)addressAsText;
- (void)dealloc;
- (MIDINetworkHost *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)host;
- (NSString *)displayName;
- (unsigned int)port;
- (NSString *)address;

@end
