/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSData, NSString;

@interface BRAccount : NSObject {
    NSString *_accountID;
    NSData *_perAppAccountIdentifier;
}

@property(copy) NSData * perAppAccountIdentifier;

+ (bool)_refreshCurrentLoggedInAccountForcingRefresh:(bool)arg1 error:(id*)arg2;
+ (id)currentCachedLoggedInAccountWithError:(id*)arg1;
+ (id)currentLoggedInAccountWithError:(id*)arg1;
+ (bool)refreshCurrentLoggedInAccount;

- (id)containerWithPendingChanges;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1;
- (bool)loginWithError:(id*)arg1;
- (bool)logoutWithError:(id*)arg1;
- (id)perAppAccountIdentifier;
- (void)setPerAppAccountIdentifier:(id)arg1;

@end