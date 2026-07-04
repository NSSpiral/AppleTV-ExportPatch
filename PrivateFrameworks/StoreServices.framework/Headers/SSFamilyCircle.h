/* Runtime dump - SSFamilyCircle
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSFamilyCircle : NSObject <SSXPCCoding>
{
    NSArray * _familyMembers;
    NSArray * _iTunesAccountNames;
}

@property (retain, nonatomic) NSArray * familyMembers;
@property (retain, nonatomic) NSArray * iTunesAccountNames;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSFamilyCircle *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSFamilyCircle *)initWithCacheRepresentation:(NSDictionary *)arg0;
- (NSDictionary *)newCacheRepresentation;
- (NSString *)allITunesIdentifiers;
- (NSArray *)allITunesAccountNames;
- (NSArray *)familyMembers;
- (void)setFamilyMembers:(NSArray *)arg0;
- (NSArray *)iTunesAccountNames;
- (void)setITunesAccountNames:(NSArray *)arg0;

@end
