/* Runtime dump - ML3DatabaseFunctionBlock
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseFunctionBlock : ML3DatabaseFunction
{
    id _block;
}

@property (copy, nonatomic) id block;

- (void).cxx_destruct;
- (char)registerWithConnection:(NSURLConnection *)arg0;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg0;

@end
