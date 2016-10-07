#import <Cordova/CDV.h>
#import <Foundation/Foundation.h>


@interface CDVrtspPlayer : CDVPlugin {

}

@property (readwrite, assign) BOOL hasPendingOperation;
@property (nonatomic, weak) CDVInvokedUrlCommand* lastCommand;

- (void)playRTSP:(CDVInvokedUrlCommand*)command;

@end
