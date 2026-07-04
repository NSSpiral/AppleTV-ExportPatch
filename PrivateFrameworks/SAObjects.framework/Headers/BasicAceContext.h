/* Runtime dump - BasicAceContext
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface BasicAceContext : NSObject <AceContext>
{
    NSMutableDictionary * _groupMap;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BasicAceContext *)sharedBasicAceContext;

- (void)dealloc;
- (BasicAceContext *)init;
- (Class)classWithClassName:(NSString *)arg0 group:(NSObject *)arg1;
- (NSDictionary *)aceObjectWithDictionary:(NSDictionary *)arg0;
- (void)registerGroupAcronym:(id)arg0 forGroupWithIdentifier:(NSString *)arg1;

@end
