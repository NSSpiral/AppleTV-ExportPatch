/* Runtime dump - ML3DatabaseFunction
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseFunction : NSObject
{
    NSString * _name;
    int _argumentCount;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) int argumentCount;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (ML3DatabaseFunction *)initWithName:(NSString *)arg0 argumentCount:(int)arg1;
- (char)registerWithConnection:(NSURLConnection *)arg0;
- (int)argumentCount;
- (void)setArgumentCount:(int)arg0;

@end
