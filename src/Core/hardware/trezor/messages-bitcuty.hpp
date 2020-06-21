#include <cstdint>
#include <string>
#include <vector>

namespace hw { namespace trezor { namespace messages { namespace bitcuty {

struct BitcutyStartRequest {};

struct BitcutyStartResponse {
	std::string version;
	std::string wallet_key;
	std::string A_plus_sH;
	std::string v_mul_A_plus_sH;
	std::string view_public_key;
};

struct BitcutyScanOutputsRequest {
	std::vector<std::string> output_public_key;
};

struct BitcutyScanOutputsResponse {
	std::vector<std::string> Pv;
};

struct BitcutyGenerateKeyimageRequest {
	std::string output_secret_hash_arg;
	uint32_t address_index = 0;
};

struct BitcutyGenerateKeyimageResponse {
	std::string keyimage;
};

struct BitcutyGenerateOutputSeedRequest {
	std::string tx_inputs_hash;
	uint32_t out_index = 0;
};

struct BitcutyGenerateOutputSeedResponse {
	std::string output_seed;
};

struct BitcutyExportViewWalletRequest {};

struct BitcutyExportViewWalletResponse {
	std::string audit_key_base_secret_key;
	std::string view_secret_key;
	std::string view_seed;
	std::string view_secrets_signature;
};

struct BitcutySignStartRequest {
	uint32_t version      = 0;
	uint64_t ut           = 0;
	uint32_t inputs_size  = 0;
	uint32_t outputs_size = 0;
	uint32_t extra_size   = 0;
};

struct BitcutyEmptyResponse {};

struct BitcutySignAddInputRequest {
	uint64_t amount = 0;
	std::vector<uint32_t> output_indexes;
	std::string output_secret_hash_arg;
	uint32_t address_index = 0;
};

struct BitcutySignAddOutputRequest {
	bool change              = false;
	uint64_t amount          = 0;
	uint32_t dst_address_tag = 0;
	std::string dst_address_S;
	std::string dst_address_Sv;
	uint32_t change_address_index = 0;
};

struct BitcutySignAddOutputResponse {
	std::string public_key;
	std::string encrypted_secret;
	uint32_t encrypted_address_type = 0;
};

struct BitcutySignAddExtraRequest {
	std::string extra_chunk;
};

struct BitcutySignStepARequest {
	std::string output_secret_hash_arg;
	uint64_t address_index = 0;
};

struct BitcutySignStepAResponse {
	std::string sig_p;
	std::string y;
	std::string z;
};

struct BitcutySignStepAMoreDataRequest {
	std::string data_chunk;
};

struct BitcutySignGetC0Request {};

struct BitcutySignGetC0Response {
	std::string c0;
};

struct BitcutySignStepBRequest {
	std::string output_secret_hash_arg;
	uint64_t address_index = 0;
	std::string my_c;
};

struct BitcutySignStepBResponse {
	std::string my_rr;
	std::string rs;
	std::string ra;
	std::string encryption_key;
};

struct BitcutyStartProofRequest {
	uint32_t data_size = 0;
};

}}}}  // namespace hw::trezor::messages::bitcuty

namespace protobuf {

typedef std::string::const_iterator iterator;

void read(::hw::trezor::messages::bitcuty::BitcutyEmptyResponse &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyEmptyResponse &v);

void read(::hw::trezor::messages::bitcuty::BitcutyExportViewWalletRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyExportViewWalletRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutyExportViewWalletResponse &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyExportViewWalletResponse &v);

void read(::hw::trezor::messages::bitcuty::BitcutyGenerateKeyimageRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyGenerateKeyimageRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutyGenerateKeyimageResponse &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyGenerateKeyimageResponse &v);

void read(::hw::trezor::messages::bitcuty::BitcutyGenerateOutputSeedRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyGenerateOutputSeedRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutyGenerateOutputSeedResponse &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyGenerateOutputSeedResponse &v);

void read(::hw::trezor::messages::bitcuty::BitcutyScanOutputsRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyScanOutputsRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutyScanOutputsResponse &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyScanOutputsResponse &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignAddExtraRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignAddExtraRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignAddInputRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignAddInputRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignAddOutputRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignAddOutputRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignAddOutputResponse &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignAddOutputResponse &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignGetC0Request &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignGetC0Request &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignGetC0Response &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignGetC0Response &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignStartRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignStartRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignStepAMoreDataRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignStepAMoreDataRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignStepARequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignStepARequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignStepAResponse &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignStepAResponse &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignStepBRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignStepBRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutySignStepBResponse &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutySignStepBResponse &v);

void read(::hw::trezor::messages::bitcuty::BitcutyStartProofRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyStartProofRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutyStartRequest &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyStartRequest &v);

void read(::hw::trezor::messages::bitcuty::BitcutyStartResponse &v, iterator s, iterator e);
std::string write(const ::hw::trezor::messages::bitcuty::BitcutyStartResponse &v);

}  // namespace protobuf
