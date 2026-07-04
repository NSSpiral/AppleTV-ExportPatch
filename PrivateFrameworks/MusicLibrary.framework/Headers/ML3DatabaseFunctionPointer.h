/* Runtime dump - ML3DatabaseFunctionPointer
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction
{
    /* block */ id * _functionPointer;
    void * _userData;
}

@property (nonatomic) /* block */ id * functionPointer;
@property (nonatomic) void * userData;

- (void *)userData;
- (void)setUserData:(void *)arg0;
- (char)registerWithConnection:(NSURLConnection *)arg0;
- (/* block */ id *)functionPointer;
- (void)setFunctionPointer:(/* block */ id *)arg0;

@end
