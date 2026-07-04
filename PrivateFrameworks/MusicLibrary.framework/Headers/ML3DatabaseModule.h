/* Runtime dump - ML3DatabaseModule
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseModule : NSObject
{
    NSString * _name;
    struct sqlite3_module * _moduleMethods;
    <ML3DatabaseModuleContext> * _context;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) struct sqlite3_module * moduleMethods;
@property (retain, nonatomic) <ML3DatabaseModuleContext> * context;

- (NSString *)description;
- (NSString *)name;
- (<ML3DatabaseModuleContext> *)context;
- (void)setContext:(<ML3DatabaseModuleContext> *)arg0;
- (void).cxx_destruct;
- (ML3DatabaseModule *)initWithName:(NSString *)arg0 moduleMethods:(struct sqlite3_module *)arg1;
- (struct sqlite3_module *)moduleMethods;

@end
